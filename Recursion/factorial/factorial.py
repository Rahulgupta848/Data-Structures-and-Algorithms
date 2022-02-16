def fact(n):
     if(n==0 or n==1):
          return 1
     return n*fact(n-1)
def main():
     n=5
     print(fact(n))
if __name__=="__main__":
     main()