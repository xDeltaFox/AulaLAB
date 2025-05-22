###########################################
#                                         #
#   Exercicio de Pólya - 10/10/2024       #
#            Israel                       #
#                                         #
###########################################


palavra = input("Digita cara:")
s = ""
i = 1
while i < (len(palavra)/2):
    c1 = palavra[i] == palavra[i+1]
    c2 = palavra[len(palavra)-1-i] == palavra[len(palavra)-2-i]
    
    if c1 == c2:
        s += "s"
    else:
        s += "n"
    
    i += 1
    
if s == "s":
    print("Sim")
else:
    print("Não")