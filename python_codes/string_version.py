
# open a file
filename = "find_letter_in_file.py"
f = open(filename, 'r')

if f.mode == 'r':
    print("file opened in read mode")

str1 = '1.1.0.56.6.242.43.45.132.435.2'
str2 = '1.0.0'

l1 = str1.split('.')
print (l1)

#content = f.read()
#print (type(content))
#print (content)

