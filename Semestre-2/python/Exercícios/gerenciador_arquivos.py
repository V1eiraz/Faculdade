import logging
import os

logging.basicConfig(
    filename='gerenciamento_erros.log',
    level=logging.ERROR,
    format='%(asctime)s - %(message)s'
)

def criar_arquivo():
    nome_arquivo = input("Digite o nome do arquivo para criar: ")
    
    if os.path.exists(nome_arquivo):
        print(f"Erro: O arquivo '{nome_arquivo}' já existe.")
        return

    try:
        f = open(nome_arquivo, 'w')
        conteudo = input("Digite o conteúdo inicial: ")
        f.write(conteudo + '\n')
        f.close()
        print(f"Arquivo '{nome_arquivo}' criado com sucesso.")
        
    except PermissionError:
        print(f"Erro: Permissões insuficientes para criar o arquivo.")
        
    except Exception as e:
        print(f"Ocorreu um erro inesperado: {e}")
        logging.error(f"Erro ao criar '{nome_arquivo}': {e}")

def abrir_arquivo():
    nome_arquivo = input("Digite o nome do arquivo para abrir: ")

    try:
        f = open(nome_arquivo, 'r')
        print(f"\n--- Conteúdo de '{nome_arquivo}' ---")
        print(f.read())
        print("----------------------------------\n")
        f.close()
        
    except FileNotFoundError:
        print(f"Erro: O arquivo '{nome_arquivo}' não foi encontrado.")
        
    except PermissionError:
        print(f"Erro: Permissões insuficientes para ler o arquivo.")
        
    except Exception as e:
        print(f"Ocorreu um erro inesperado: {e}")
        logging.error(f"Erro ao abrir '{nome_arquivo}': {e}")

def editar_arquivo():
    nome_arquivo = input("Digite o nome do arquivo para editar: ")

    if not os.path.exists(nome_arquivo):
        print(f"Erro: O arquivo '{nome_arquivo}' não foi encontrado.")
        return

    try:
        f = open(nome_arquivo, 'a')
        novo_conteudo = input("Digite o texto para adicionar: ")
        f.write(novo_conteudo + '\n')
        f.close()
        print("Conteúdo adicionado com sucesso.")

    except PermissionError:
        print(f"Erro: Permissões insuficientes para editar o arquivo.")
        
    except Exception as e:
        print(f"Ocorreu um erro inesperado: {e}")
        logging.error(f"Erro ao editar '{nome_arquivo}': {e}")


while True:
    print("\n--- Gerenciador de Arquivos ---")
    print("1. Criar novo arquivo")
    print("2. Abrir arquivo")
    print("3. Editar (anexar) arquivo")
    print("4. Sair")
    
    opcao = input("Escolha uma opção (1-4): ")
    
    # Substituindo if/elif/else por match/case (Python 3.10+)
    match opcao:
        case '1':
            criar_arquivo()
        case '2':
            abrir_arquivo()
        case '3':
            editar_arquivo()
        case '4':
            print("Saindo...")
            break
        case _:
            print("Opção inválida. Tente novamente.")