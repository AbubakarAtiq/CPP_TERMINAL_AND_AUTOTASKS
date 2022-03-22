import pywhatkit,webbrowser
#import webdriver from selenium library
from selenium import webdriver
#importing keys in the program from webdriver
from selenium.webdriver.common.keys import Keys
# providing the path of chrome Web driver
driver=webdriver.ChromiumEdge('d:/Softwares and Practice/msedgedriver.exe')
# Opening url by get() method
driver.get("https://web.whatsapp.com")
from flask import Flask
#Add a URL of WebWhatsApp to open it in a browser
# url='https://web.whatsapp.com/'
# #Open the URL using open() function of module
# webbrowser.open_new_tab(url)
print('''=============================\nEHOME TECHNOLOGIES PVT LIMITED\n=============================\nsending messages...''')
Phonedata=["+923219470315","+923436629652"]
HH=20;MM=32
#close_time parameter (in seconds). Say, TT=08
TT=8
message_to_send=("Hi,Message by Python WhatsApp.")
#To extend the phone database use extend function
'''
a=["s","ss"];b=["s","output"]
a.Extend(b);print(a)
-->Output: Will be combine with a and b.
pywhatkit.sendwhats_image("+Country-code:XXXXXXXX-SS", "C:\\Image.png", "Here is the image", 10, True, 5)
'''
pywhatkit.sendwhatmsg(Phonedata[0],message_to_send,HH,MM,TT)
#print(Phonedata[0:],message_to_send)
'''
By writing this command, We will get list of all string
print(Phonedata[0:],message_to_send)
-->Output:
=============================
EHOME TECHNOLOGIES PVT LIMITED
=============================
sending messages...
['+923219470315', '+923219470316'] Hi
'''
#pywhatkit.sendwhatmsg(Phonedata[1],message_to_send,HH,MM,TT)
'''
sendwhatmsg(phone_no: str, message: str, time_hour: int, time_min: int, wait_time: int = 15, tab_close: bool = False, close_time: int = 3) -> None
This function is used to send WhatsApp messages to a particular number at a time given by the user.
The time should be given in 24 hour format.
 The tab_close parameter specifies whether the tab should we closed after sending the message or not. You can control the time after which the tab should be closed by specifying the close_time parameter (in seconds).

Example: pywhatkit.sendwhatmsg("+910123456789", "Hello", 12, 12, 30)
See following website for more.
https://github-wiki-see.page/m/Ankit404butfound/PyWhatKit/wiki/Sending-WhatsApp-Messages

'''