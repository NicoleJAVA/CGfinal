#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class testApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		void exit();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);




	//void circleResolutionChanged(int & circleResolution);
	void musicButtonPressed();
	void pauseButtonPressed();
	void louderVolButtonPressed();
	void lowerVolButtonPressed();
	//bool bHide;

		ofSoundPlayer my_sound;
		ofSoundPlayer my_singer;

	//ofxFloatSlider radius;
	//ofxColorSlider color;
	//ofxVec2Slider center;
	//ofxIntSlider circleResolution;
	//ofxToggle filled;
	//ofxButton twoCircles;
	ofxButton musicButton;
	ofxButton pauseButton;
	ofxButton louderVolButton;
	ofxButton lowerVolButton;
	//ofxLabel screenSize;

	ofxPanel gui;

	ofSoundPlayer music;
	
	float volume;
	
};
