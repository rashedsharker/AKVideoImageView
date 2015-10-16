//
//  AKVideoImageView.h
//
//  Created by Oleksandr Kirichenko on 4/23/15.
//  Copyright (c) 2015 Oleksandr Kirichenko. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AKVideoImageView : UIImageView

///assign this property to dynamically switch video
@property (strong, nonatomic, nonnull) NSURL *videoURL;

- (nullable instancetype)initWithFrame:(CGRect)frame
                              videoURL:(nonnull NSURL *)videoURL NS_DESIGNATED_INITIALIZER;

@end
