# Server System Program

# Importing Stuff 
import os
import time
import smtplib
from tkinter import *

# Tkinter app
window = Tk()
window.title(" Planet Howler system")
window.geometry("600x250")
newlabel = Label(window, text="     Welcome to the Planet Howler System", font=("Arial Bold", 20),background = 'white')
newlabel.grid(column=0, row=0)
window.configure(bg='white')
def clicked_one():
    server = smtplib.SMTP_SSL("smtp.gmail.com", 465) 
    server.login("PlanetHowler@gmail.com", "hmnimai1yo")
    server.sendmail("PlanetHowler@gmail.com", "731600@pdsb.net", """This is a test. This is a test. If you can read this,
     it works properly. This is a test. This is a test.""")
btn = Button(window, text="Test System", command=clicked_one)
btn.grid(column=0, row=4)

# Loop for the Pinging
while 101==101 :
    window.mainloop()
    hostname = "192.168.1.129" 
    response = os.system("ping -n 1 " + hostname)
    if response == 0:
        print(hostname, 'is up')
        time.sleep(1)
    else:
        print(hostname, 'is down')
        server = smtplib.SMTP_SSL("smtp.gmail.com", 465)
        server.login("PlanetHowler@gmail.com", "hmnimai1yo")
        server.sendmail("PlanetHowler@gmail.com", "731600@pdsb.net", """This is an Emergency. The system has a failure.
         This is an Emergency. The system has a failure""")
        time.sleep(1)
    


    


    
    
























































