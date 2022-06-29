print("hello")
print('Hello')

Anthem = "Arise o compatriot, Nigerians call obey, to serve..."
print(Anthem)

print('\n')

pledge = """I pledge to Nigeria my country,
To be faithfull, loyal and honest...
To serve Nigeria with all my strength
To become a unity and uphold our honor and glory..
so help me God....."""
print(pledge)

print('\n')

#STRINGS ARE ARRAY
print("=====strings are array======")

array = "COMMUNICATE"
print(array[3])
print(array[5])
print(array[0])

#SLICING

print(array[2:7])
print(array[-6:-1])

print(len(array))

print(array.lower())

fruit = "watermelon";

stg = fruit.upper()
print(stg)

print(array.replace("T","G"))

txt = "The rain in spain is mainly in the plian"
x = "is" in txt
print(x)
u = "go" in txt
print(u)
v = "them" not in txt
print(v)

con1 = "int the name"
con2 = "Allah the most gracious the most merciful {} {}"
cont = con1 + " " + con2
print(cont)
num = 99
nu = 7
print(con2.format(num, nu))

quantity = 5
itemno = 332
price = 389.32

myoder = "I want {} pieces of item {} for {} dollars."
print(myoder.format(quantity, itemno, price))

aluta = "We are \\the\\ so called \"Codhero\" from \'ALX\'"
print(aluta)

day = "It \tis a nice su\nnny day"
print(day.upper())
word = "the quick brown fox jump over the lazy dog"
print(word.capitalize())
print(word.isalnum())
