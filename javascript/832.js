const flipAndInvertImage = (A) => {
  const resArr = []
  for (let arr of A) {
    resArr.push(arr.reverse())
  }
  for (arr of resArr) {
    for (let i = 0; i < arr.length; i++) {
      arr[i] = arr[i] === 1 ? 0 : 1;
    }
  }
  return resArr
}