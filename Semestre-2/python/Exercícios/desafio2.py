#cadastro
texto="Cadastro de Acesso Condicional:"
print(texto.strip())
nome=input('Informe o nome completo: ')
idade=input('Informe a idade: ')
senha=input('Informe a senha: ')
senha=senha.lower()
liberar_acesso=0
if not nome:
    print('Informe um nome válido!')
else:
    liberar_acesso+=1

if not idade.isnumeric() or int(idade)<18:
    print('Informe uma idade válida')
else:
    liberar_acesso+=1
if  not senha == "1234" and not senha.startswith("admin"):
    liberar_acesso+=1
else:
    print('Senha inválida!')
if liberar_acesso==3:
    print('Seja bem vindo(a)',nome,'!')
else:
    print('Acesso negado!')
#--------------------------------------------------
nome=nome.lower()
idade=int(idade)
if nome.startswith('a') or nome.startswith('e') or nome.startswith('i') or nome.startswith('o') or nome.startswith('u'):
    print('O nome inicia com vogal')
else:
    print('O nome não inicia com vogal')
print(bool(idade))
if senha.isnumeric() :
    senha=int(senha)
    senha+=10
    print(senha)
else:
    print("A senha não é numérica")
