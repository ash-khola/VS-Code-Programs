# Type 1- Mutable(new elelements can be added )
numericals = {1,2,3,4}
print (numericals) #duplicates will be removed
# adding a new item "a" to numericals set
numericals.add("a")
print (numericals)

# Type 2 Frozen set - Elemrnts can't be added further
numericals = frozenset("123421")
print (numericals)