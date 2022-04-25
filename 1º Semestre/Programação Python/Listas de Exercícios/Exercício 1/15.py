# 15.	Refazer o programa 14 realizando as quatro operações aritméticas básicas.

numero1 = float(input("Informe um número real: "))
numero2 = float(input("Informe outro número real: "))
soma = numero1 + numero2
subtracao = numero1 - numero2
produto = numero1 * numero2
divisao = numero1 / numero2

print("\nA soma dos números %.2f e %.2f " % (numero1, numero2) + "é %.2f" %soma, end=".")
print("\nA subtração dos números %.2f e %.2f " % (numero1, numero2) + "é %.2f" %subtracao, end=".")
print("\nO produto dos números %.2f e %.2f " % (numero1, numero2) + "é %.2f" %produto, end=".")
print("\nA divisão dos números %.2f e %.2f " % (numero1, numero2) + "é %.2f" %divisao, end=".")