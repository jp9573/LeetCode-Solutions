const findAndReplacePattern = (words, pattern) => {
  const res = []
  let counter = 1
  for (let letter of pattern) {
    if (letter.match(/[a-zA-Z]/)) {
      let re = new RegExp(letter, "g");
      pattern = pattern.replace(re, counter)
      counter++
    }
  }
  for (let word of words) {
    counter = 1
    let tmpWord = word
    for (letter of word) {
      if (letter.match(/[a-zA-Z]/)) {
        let re = new RegExp(letter, "g");
        word = word.replace(re, counter)
        counter++
      }
    }
    if (pattern == word) res.push(tmpWord)
  }
  return res
}