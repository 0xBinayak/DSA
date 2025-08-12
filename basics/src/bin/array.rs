fn sum_array(arr: &[i32]) -> i32 {
    let mut sum = 0;
    for &num in arr {
        sum += num;
    }
    sum
}

fn main() {
    let numbers = vec![1, 2, 3, 4, 5];
    let total = sum_array(&numbers);
    println!("Sum of array = {}", total);
}
