# Ejemplo blink para el PIC18F47Q43 con bootloader

Este proyecto se puede tomar como plantilla para aplicaciones que corran sobre
el bootloader desarrollado en este [repositorio](https://github.com/SamuelSamsMA/PIC18F47Q43_Bootloader.X.git),
pues ya se cuenta con toda la configuración necesaria de acuerdo al [tutorial](https://onlinedocs.microchip.com/oxy/GUID-67539092-2179-43C1-8600-118A85E49693-en-US-6/GUID-6E174CA3-DF14-496C-8A9D-1D1F8EF047AF.html) oficial de Microchip.

## Descripción de la aplicación

Esta es una aplicación simple que hace parpadear un LED en dos frecuencias distintas
de acuerdo al estado de un pulsador.

### Asignación de pines

| Dirección | Función        |
|-----------|----------------|
| RA6       | input: BUTTON  |
| RE2       | output: LED    |

## Software necesario

+ MPLABX IDE v6.20
+ MPLAB Code Configurator (MCC) v5.5.1
+ Librería de dispositivos
    + PIC10/PIC12/PIC16/PIC18 v5.28.2
+ XC8 Compiler v2.5
+ Microchip Firmware Image Builder
    + pyfwimagebuilder v1.0.1.14 or later
+ Microchip Device Firmware Upgrade
    + pymdfu v2.4.0.8 or later

## Procedimiento para cargar la aplicación al PIC

1. Ajustar los periféricos del microcontrolador y escribir el código de la aplicación.
2. Configurar el reloj y los bits de configuración igual que los del [bootloader](https://github.com/SamuelSamsMA/PIC18F47Q43_Bootloader.X.git).
3. Copiar el archivo **bootloader_configuration.toml** generado por el [bootloader](https://github.com/SamuelSamsMA/PIC18F47Q43_Bootloader.X.git), en el directorio de este proyecto.
    + La ruta de ese archivo es **mcc_generated_files\bootloader\configurations\\**
4. Compilar la aplicación.
    + Este proyecto ya está configurado para ejecutar el comando `pyfwimagebuilder build -i ./dist/default/production/PIC18F47Q43_BLINK_BL.X.production.hex -c bootloader_configuration.toml -o output.img` automáticamente después de la compilación[^1].

5. Entrar al modo boot en el PIC (RESET -> BOOT_BUTTON).
6. Grabar el archivo de imagen mediante la herramienta **pymdfu** en la términal
    + `pymdfu update --tool serial --image output.img --baudrate 9600 --port COM3`
7. Si todo salió bien, el PIC saldrá del modo boot una vez que la aplicación se halla escrito y comprobado correctamente.

[^1]: El programa **pyfwimagebuilder** combina la configuración del bootloader con el código hexadecimal de la aplicación para crear el archivo de imagen que se grabará en el PIC mediante el convertidor USB-TTL.

