def conversion(num):
  try:
    dnum = float(num)
    bnum = bin(int(dnum))
    return bnum[2:]
  except ValueError:
    return "ERROR"
num= input("enter the number: ")
print(conversion(num))
