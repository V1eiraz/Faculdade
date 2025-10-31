numero=int(input("informe um numero inteiro: "))
if numero%2 != 0 :
    par_impar= "impar"
else :
    par_impar= "par"

if numero>0 :
    positivo_negativo="positivo"
else:
    positivo_negativo="negativo"

print("O numero ",numero,"é ",par_impar,"e ",positivo_negativo)
 