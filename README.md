# AC Voltage Measurement Using PIC
[Blog Post Link](https://embeddedlaboratory.blogspot.com/2017/01/ac-voltage-measurement-using-pic.html)  
Alternating Current Voltmeters are most common devices for Embedded and Hardware Engineers and are used on daily purpose for measuring AC RMS voltage values in their circuits. In this post i will show you how to make digital AC voltmeter using Microchip PIC micro-controller and then display voltage values on 16x2 Alphanumeric LCD. We have already posted a post earlier on DC Voltage measurement using PIC, those who are interested in DC Voltage measurement can read the post by clicking here.  
In this post i will just concentrate on the AC RMS Voltage measurement technique using PIC Micro-controller, the process and sensing circuit is applicable for all other micro-controllers, those who are just interested in 16x2 Alphanumeric LCD, can read this post.  
So let's begin our journey, in this post i will show you how measure AC RMS Voltage upto 240V RMS value.  
As you know PIC micro-controller can only measure voltage upto 5V and if we give this 240V AC signal directly to PIC, then God knows what will happen to little PIC, but one thing is sure, its of no use to us.  
So before proceeding further we have to drop down the AC Voltage to a level which PIC can withstand, and we can do this by simply using simple Voltage Divider circuit.  

![Simulation Diagram](https://3.bp.blogspot.com/-Br8rB7pB_QA/WIeJa4VEvbI/AAAAAAAAAUk/sweyRG7JSyclknvWpxzMlyxP4NNlER-LQCLcB/s1600/Schematic%2BDiagram.png)  

[YouTube Video](https://www.youtube.com/watch?v%3D0k81jLxWtA0)

## Some Snapshots of Running Simulation
![238V Measured](https://1.bp.blogspot.com/-nJJm3UpWrNo/WItd4bEiWII/AAAAAAAAAVY/8tcXWjczrCowVdufrs7CROMXxgJrHU-lQCLcB/s1600/Sample-1.PNG)

![91V Measured](https://3.bp.blogspot.com/-S2KgHw8gumY/WItd4ogXvhI/AAAAAAAAAVg/5ilzBa41S9whnroT8Z_ATh_CQ8ozrSw9wCLcB/s1600/Sample-2.PNG)

![67V Measured](https://1.bp.blogspot.com/-631XtaU4GrU/WItd4Y-jwRI/AAAAAAAAAVc/m73uG8BM38oANOCsVjY1vO5SngnvydbhQCLcB/s1600/Sample-3.PNG)