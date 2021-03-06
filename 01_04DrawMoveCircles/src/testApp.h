#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    // 描画する円の数を指定
    static const int CIRCLE_NUM = 100;
    
    // 位置の配列を生成
    float posX[CIRCLE_NUM];
    float posY[CIRCLE_NUM];
    
    // 速度の配列を生成
    float speedX[CIRCLE_NUM];
    float speedY[CIRCLE_NUM];
};
