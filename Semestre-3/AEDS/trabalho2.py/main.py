import os
import time

def clear_output():
    os.system('cls' if os.name == 'nt' else 'clear')

def quicksort(arr , left , right):
    if left < right:
        pivo = partition(arr , left , right)
        quicksort(arr , left, pivo-1)
        quicksort( arr , pivo+1, right)
    


def partition(arr , left , right):
    pivo = arr[right]
    i = left-1
    for j in range(left, right):
        if arr[j] <= pivo:
            i+=1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i+1], arr[right] = arr[right], arr[i+1]
    return i+1

def readarchive():
    dir = os.path.dirname(os.path.abspath(__file__))
    try:
        path = os.path.join(dir, "config", "input.dat")
        with open(path, "r") as file:
            n = int(file.readline().strip())
            nums = list(map(int, file.readline().strip().split()))
    except FileNotFoundError:
        print("Arquivo não encontrado!")
        return [], 0
    return nums, n

def writearchive(arr):
    dir = os.path.dirname(os.path.abspath(__file__))
    try:
        path = os.path.join(dir, "outputs", "output.dat")
        with open(path, "w") as file:
            for num in arr:
                file.write(f"{num}\n")
    except FileNotFoundError:
        print("Erro ao escrever arquivo!")
        return

nums, n = readarchive()

clear_output()

start = time.perf_counter()
quicksort(nums, 0, n-1)
end = time.perf_counter()

tempo_execucao = end - start
print(f"Tempo de execução do QuickSort: {tempo_execucao:.6f} segundos")

writearchive(nums)







        