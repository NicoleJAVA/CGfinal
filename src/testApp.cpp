#include "testApp.h"



//--------------------------------------------------------------
void testApp::setup(){
	ofSetVerticalSync(true);
	ofBackground(33,33,33);
	my_sound.loadSound("");
	my_singer.loadSound("");

	my_sound.setMultiPlay(true);
	my_singer.setMultiPlay(true);

	music.setMultiPlay(true);
	musicButton.addListener(this,&testApp::musicButtonPressed);
	pauseButton.addListener(this,&testApp::pauseButtonPressed);
	louderVolButton.addListener(this,&testApp::louderVolButtonPressed);
	lowerVolButton.addListener(this,&testApp::lowerVolButtonPressed);


	gui.setup(); 
	//lowerVolButton.setPosition(250.0f,250.0f );
	//musicButton.setup("Play",200.0f, 200.0f,
	gui.add(musicButton.setup("Play",150.0f, 150.0f));
	gui.add(pauseButton.setup("Stop",150.0f, 150.0f));
	gui.add(louderVolButton.setup("+",150.0f, 150.0f));
	gui.add(lowerVolButton.setup("-",150.0f, 150.0f));
	//gui.setPosition(3.3f, 100.0f);
	music.loadSound("imcamp.mp3");
	playImg.loadImage("play_icon.png");
	//playImg;
	//musicButton.loadFromFile("play_icon.png");
	volume = 0.5f;

	

}

//--------------------------------------------------------------
void testApp::exit(){
	//musicButton.removeListener(this,&testApp::musicButtonPressed);
	//pauseButton.removeListener(this,&testApp::pauseButtonPressed);
}

//--------------------------------------------------------------
void testApp::update(){
	//musicButton.addListener(this,&testApp::musicButtonPressed);
	//pauseButton.addListener(this,&testApp::pauseButtonPressed);


	music.setVolume(volume);
	ofSoundUpdate();
}

//--------------------------------------------------------------
void testApp::draw(){
	louderVolButton.setPosition(800.0f,250.0f );
	lowerVolButton.setPosition(450.0f,250.0f );
	musicButton.setPosition(50.0f,250.0f );
	pauseButton.setPosition(250.0f,250.0f );
		
	gui.draw();

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

	/*************************************
	if (key == '-' || key == '_' ){
		volume -= 0.05;
		volume = MAX(volume, 0);
	} else if (key == '+' || key == '=' ){
		volume += 0.05;
		volume = MIN(volume, 1);
	}
	
	/*************************************/
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
	//my_sound.play;

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}

void testApp::musicButtonPressed(){
	//music.setVolume(volume);
	music.play();
	float cur_pos = music.getPosition();
	printf("The music is now at : \n%f\n",cur_pos);
	music.setPaused(false);
}

void testApp::pauseButtonPressed(){

		if (!music.getIsPlaying()) {
			music.setPaused(false);
		} else {
			music.setPaused(true);
		}
}



void testApp::louderVolButtonPressed(){

	volume += 0.1;
	volume = MIN(volume, 1);
}

//********************************************
void testApp::lowerVolButtonPressed(){

	volume -= 0.1;
	volume = MAX(volume, 0);
}