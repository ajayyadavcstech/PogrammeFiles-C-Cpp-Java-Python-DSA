# handling read and write mode
#"r+" read and write mode


f=open("ajay2.txt","r+")
content=f.read()
print(content)
f.write("\nthanks you")

