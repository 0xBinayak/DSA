fn add(a: i32, b: i32) -> i32 {
    a + b // no semicolon means this is the return value
}

fn main() {
    let result = add(3, 7);
    println!("Sum = {}", result);
}
