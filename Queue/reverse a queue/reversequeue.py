q=[1,2,3,4,5,6,7,8,9]
def reverse(q):
     if(len(q)==0):
          return
     el=q.pop(0)
     reverse(q)
     q.append(el)
print(q)
reverse(q)
print(q)