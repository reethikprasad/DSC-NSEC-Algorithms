### Weird Sorting by reethikprasad

_Given an array with 7 21 7 7 7 21 14 14 21 7 sort them in increasing order_

[Problem link](https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/1.%20Array/weird_sorting/weird_sorting.md)<br>

So we have been given an array let say
21 7 7 7 21 14 14 21 7

We wants to organize the bags in a non-decreasing order
So We gonna use the **sort STL algorithm** to sort them

###### SORT STL

It generally takes two parameters , the first one being the point of the array/vector from where the sorting needs to begin <br>and the second parameter being the length up to which we want the array/vector to get sorted.<br>
The third parameter is optional and can be used in cases such as if we want to sort the elements lexicographically

This can be used to sort array much faster and would take less time.

###### Example

`int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };`
` int n = sizeof(arr) / sizeof(arr[0]);`

    /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/
    sort(arr, arr + n);

Time complexity-O(n)<br>
Space complexity-O(1)<br>
<br>
<br>
