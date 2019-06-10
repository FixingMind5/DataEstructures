
# 0, -1, 10, 5, 6, 100, 199, 190, 1


def _dividir(arr, low, high):
    i = (low - 1)
    pivot = arr[high]

    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]

    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    # import pdb; pdb.set_trace()
    print(i)
    return (i + 1)


def _quick_sort(arr, low, high):
    if low < high:
        partitionIndex = _dividir(arr, low, high)
        _quick_sort(arr, low, partitionIndex - 1)
        _quick_sort(arr, partitionIndex + 1, high)


if __name__ == '__main__':
    arr = [199, 190, 10, 5, 6, 100, 0, -1, 1]
    n = len(arr)
    _quick_sort(arr, 0, n - 1)
    [print(n, end = ", ") for n in arr]
    print()
