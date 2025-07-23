public class TV {
    int channel = 1;
    int volumeLevel = 1;
    boolean on = false;

    public TV(){

    }

    public void turnOn(){
        on = true;
    }

    public void turnOff(){
        on = false;
    }

    public void setChannel(int channel) {
        if(on && channel>=1 && channel<=120)
        this.channel = channel;
    }

    public void setVolumeLevel(int volumeLevel){
        if(on && volumeLevel>=1 && volumeLevel<=10)
        this.volumeLevel = volumeLevel;
    }

    public void channelUp(){
        if(on && channel<=120)
        channel++;
    }

    public void channelDown(){
        if(on && channel>=1)
        channel--;
    }

    public void volumeLevelUp(){
        if(on && volumeLevel<=120)
        volumeLevel++;
    }

    public void volumeLevelDown(){
        if(on && volumeLevel>=1)
        volumeLevel--;
    }
}
