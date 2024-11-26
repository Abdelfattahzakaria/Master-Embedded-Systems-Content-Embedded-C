@@@ stack_top Will Be Determined By Linker Script ... Pass It First In: arm-none-eabi-ld.exe -T linker_script.ld startup.o ...   
@@@ Add Empty Line At The End!
@@@   Author :                                 abdelfattahzakariaelbadry.gmail.com

.globl reset 
reset: 
    ldr sp, =stack_top
    bl main 
stop: b stop                        
 