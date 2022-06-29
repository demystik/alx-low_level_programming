itemlist = ["sweet", "soap","milk","cofee", "sugar", "bread","iron","towel", "perfume"]
print(itemlist)

print(itemlist[0])

itemlist[0] = "peanut"

print(itemlist[0])

print(itemlist[2:6])

print(itemlist[-5:-2])

print(itemlist[:4])

print(itemlist[3:])

for x in itemlist:
    print(x)

if "mango" in itemlist:
    print("Yes! mango is in the itemlist")
else:
    print("No mango is not in the itemlist")

print(len(itemlist))

itemlist.append("orange")
print(itemlist)

print('\n')
print("-----------------\njuice inserted\n")
#To insert
itemlist.insert(4, "juice")
print(itemlist)
