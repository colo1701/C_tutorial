# <p align="center"> C Cheat Sheet </p>

<p align="center">
<img src="https://github.com/colo1701/holodeck/blob/main/images/c_logo.png" width="200" alt="I should be an image... =( ">
</p>

## Data Types  
Type | Size | Min Value | Max Value  
--- | --- | --- | --- 
char | 1 byte | -128 | 127  
unsigned char | 1 byte | 0 | 255 
signed char | 1 byte | -128 | 127 
int | 2 or 4 bytes | -32,768 or -2,147,483,648 | 32,767 or 2,147,483,647 
unsigned int | 2 or 4 bytes | 0 | 65,535 or 4,294,967,295
short | 2 bytes | -32,768 | 32,767
unsigned short | 2 bytes | 0 | 65,535
long | 8 bytes | -9,223,372,036,854,775,808 | 9,223,372,036,854,775,807
unsigned long | 8 bytes | 0 | 18,446,744,073,709,551,615

## Loop Types

### For Loop  
int VAR;  
  
for(START VALUE for VAR; STOP CONDITION; STEP) {  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;COMMANDS;  
}  

### While Loop  
int VAR = START VALUE for VAR;  
  
while(STOP CONDITION) {  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;COMMANDS;  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;STEP;  
}  
  
### Do While Loop  
int VAR = START VALUE for VAR;  
  
do {  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;COMMANDS;  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;STEP;  
} while(STOP CONDITION);
