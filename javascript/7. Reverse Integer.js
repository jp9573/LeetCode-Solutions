var reverse = function(x) {
    const isNegative = x < 0;
    const xStrArr = Math.abs(x).toString().split("");
    const reversStr = xStrArr.reverse().join("");
    const num = Number(reversStr);
    if (isNegative && num > Math.pow(2, 31)) {
        return 0;
    }
    if (!isNegative && num > Math.pow(2, 31) - 1) {
        return 0;
    }
    return isNegative ? -num : num;
};
