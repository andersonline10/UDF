""" Ex. 12. Elabore um algoritmo que indique se um número digitado está compreendido entre 20 e
90, ou não """

numero = float(input("Digite um número: "))

if 20 <= numero <= 90:
    print(f"O número {numero:0.2f} está compreendido entre 20 e 90.")
else:
    print(f"O número {numero:0.2f} não está compreendido entre 20 e 90.")
