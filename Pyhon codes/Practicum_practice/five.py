class vector:
    def __init__(self, vec):
        self.vec = vec
    
    def __str__(self):
        str1 = ""
        index = 0
        for i in self.vec:
            str1 += f"{i}a{index} +"
            index += 1;
        return  str1[:-1]

    def __add__(self, vec2) :
        if (len(self.vec) != len(vec2.vec)):
            return ("The length of the two vectors is not same")
            
        newList= []
        for i in range (len(self.vec)):
            newList.append(self.vec[i] + vec2.vec[i])
        return vector(newList)

    def __mul__(self, vec2):
        if (len(self.vec) != len(vec2.vec)):
            return ("The length of the two vectors is not same")
            
        sum = 0
        for i in range(len(self.vec)):
            sum += self.vec[i] * vec2.vec[i]
        return sum
    
    def __len__(self):
        return len(self.vec)

v1 = vector([1, 4, 6, 5])
v2 = vector([1, 6, 9])
print(v1 + v2)
# print(v1 * v2)
# print(len(v1))
# print(len(v2))


