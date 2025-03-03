fn main() {
    println!("cargo:rerun-if-changed=src/my_gcd.cpp");

    cc::Build::new()
        .cpp(true) // Enable C++ compilation
        .files(&["src/my_gcd.cpp"])
        .compile("cpp_lib");
}
