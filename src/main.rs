
extern "C" {
    fn gcd(a: isize, b: isize) -> isize;
}


fn main() {
    let a = 12;
    let b = 18;
    // FFI calls require an unsafe block.
    let result = unsafe { gcd(a, b) };
    println!("The gcd of {} and {} is {}", a, b, result);
}
