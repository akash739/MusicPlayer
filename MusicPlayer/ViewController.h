//
//  ViewController.h
//  MusicPlayer
//
//  Created by teks on 5/9/16.
//  Copyright © 2016 teks. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DJAudioPlayer.h"


@interface ViewController : UIViewController



@property (nonatomic, strong) DJAudioPlayer *audioPlayer;

@property (weak, nonatomic) IBOutlet UISlider *currentTimeSlider;
@property (weak, nonatomic) IBOutlet UIButton *playButton;
@property (weak, nonatomic) IBOutlet UILabel *duration;
@property (weak, nonatomic) IBOutlet UILabel *timeElapsed;

@property BOOL isPaused;
@property BOOL scrubbing;

@property NSTimer *timer;


@end

