#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetWindowTitle("Grid");
	ofSetWindowShape(500, 500);
	ofSetCircleResolution(60);
}

//--------------------------------------------------------------
void ofApp::update() {
	ofFill();
}

//--------------------------------------------------------------
void ofApp::draw() {

	if (drawGrid) {
		ofFill();
		ofSetColor(0);
		ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
		drawGrid = false;
		int gridSize = 35;
		for (int x = gridSize; x <= ofGetWidth() - gridSize; x += gridSize) {
			ofNoFill();
			for (int y = gridSize; y <= ofGetHeight() - gridSize; y += gridSize) {
				int squircle = rand() % 9 + 0;
				if (squircle > 0) {
					ofSetColor(200);
					ofDrawRectangle(x - 15, y - 15, 30, 30);
				}
				else {
					ofSetColor(255);
					ofDrawCircle(x, y, 15);
				}
			}
		}
	}


}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
	if (button == 0) {
		ofSetBackgroundAuto(false);
		drawGrid = true;
	}
}
