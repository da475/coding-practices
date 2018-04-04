
# open a file
filename = "find_letter_in_file.py"
f = open(filename, 'r')

if f.mode == 'r':
    print("file opened in read mode")

content = f.read()
print (type(content))
print (content)

