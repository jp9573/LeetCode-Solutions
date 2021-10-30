class Teemo_Attacking {
    public int findPoisonedDuration(int[] timeSeries, int duration) {
        int total = 0;
        for(int i = 1; i < timeSeries.length; i++) {
            if(duration > timeSeries[i] - timeSeries[i-1]) 
                total += (timeSeries[i] - timeSeries[i-1]);
            else 
                total += duration;
        }
        total += duration;
        return total;
    }
}
