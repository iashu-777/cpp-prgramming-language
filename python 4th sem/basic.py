# s=list(input("Enter the string "))
# i=0
# j=len(s)-1
# while(i<j):
#     while(not(s[i].isalpha)):
#         i+=1
#     while(not(s[j].isalpha)):
#         j-=1
#     s[i],s[j]=s[j],s[i]
#     i+=1
#     j-=1

# print(s)

ipt = "in@#fytq&!"
lst = list(ipt)
i, j  = 0, len(ipt) - 1

while i < len(ipt)//2:
    if lst[i].isalnum() and lst[j].isalnum():
        lst[i], lst[j] = lst[j], lst[i]
        print(lst)
        i, j = i+1, j-1
        
    elif not lst[i].isalnum():
        i += 1
    else:
        j -= 1
print("".join(lst))