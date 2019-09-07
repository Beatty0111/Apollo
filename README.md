
<div style="text-align: center; margin: 0% 10%">

# Helping Hand (Codename Apollo)

*Innovation Challenge Project by Tylor Beatty and Stanley Huang*

  <img src="https://raw.githubusercontent.com/Beatty0111/Apollo/master/project.jpg" height="400px">

**Overview**

Modern prosthetics can cost tens of thousands of dollars and kids quickly outgrow them. For most children, getting access to these devices is an impossible dream. 

**Design**

With the advancement of 3-D printing and the constant price drop in the printers, 3-D printed prosthetics are becoming more readily available. However, most 3-D printed prosthetics rely on joint movements in the arm to move the prosthetic, this limits the accuracy and flexibility of the hand. 

Our design for solving this issue includes a robotic 3-D printed prosthetic and a gesture sensing glove to help achieve the desired prosthetic motion. The prosthetic arm is motorized with five servos controlling each finger. The glove uses flex sensors to detect the motions generated. This is achieved by an anolog read of the change in voltage created by the flex sensors, by a microcontroller. This microcontroller normalizes this data to an angle and sends the data to another microcontroller, in the prosthetic, over I2C. The second microcontroller constantly reads data and updates the positon of the fingers.

</div>
