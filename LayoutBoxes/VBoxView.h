//
//  VBoxView.h
//  LayoutBoxes
//
//  Created by Daniel Monego on 12/17/12.
//  Copyright 2012 CDM. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface VBoxView : UIView 
{
    float currentHeight;
}

@property (nonatomic, assign) float gap;

-(void)adjustFrame;

@end
