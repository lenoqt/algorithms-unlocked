#[derive(Debug)]
struct Result{
    found: bool,
    value: i32,
    index: u32,
}

fn linear_search(vector: &Vec<i32>, value: i32) -> Result {
    for (index, x) in vector.iter().enumerate() {
        if value == *x {
            return Result {
                found: true,
                value: *x,
                index: index as u32,
            };
        }
    }
    Result { found: false, value: -1, index: std::u32::MAX }
}

fn main() {
    let v = vec![0, 2, 4, 6];

    let res = linear_search(&v, 4);
    let res1 = linear_search(&v, 99);
    println!("Valid search");
    println!("Found: {}, Value: {}, Index: {}", res.found, res.value, res.index);
    println!("Invalid Search");
    println!("Found: {}, Value: {}, Index: {}", res1.found, res1.value, res1.index);

}
