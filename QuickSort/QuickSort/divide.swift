//
//  divide.swift
//  QuickSort
//
//  Created by Manuel Alejandro Aguilar Tellez Giron on 6/10/19.
//  Copyright © 2019 Manuel Alejandro Aguilar Tellez Giron. All rights reserved.
//

import Foundation

func divide(arr: inout [Int], low: Int, high: Int) -> Int {
    var temp: Int?
    var i = low - 1
    var pivot = arr[high]
    
    for j in (low..<high) {
        if arr[j] <= pivot {
            i += 1
            temp = arr[i]
            arr[i] = arr[j]
            arr[j] = temp!
        }
    }
    
    temp = arr[i + 1]
    arr[i + 1] = arr[high]
    arr[high] = temp!
    
    return (i+1)
}

func quick_sort(arr: inout [Int], low: Int, high: Int) {
    if low < high {
        var partitionIndex: Int = divide(arr: &arr, low: low, high: high)
        quick_sort(arr: &arr, low: low, high: partitionIndex - 1)
        quick_sort(arr: &arr, low: partitionIndex + 1, high: high)
    }
}
