//
//  XBPageDragView.h
//  XBPageCurl
//
//  Created by xiss burg on 6/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XBPageCurlView.h"

@protocol XBCurlDelegate <NSObject>

@optional
-(void)beginDrag;
-(void)endDrag;

@end

@interface XBPageDragView : UIView

@property (weak, nonatomic) id <XBCurlDelegate> delegate;

@property (nonatomic, strong) IBOutlet UIView *viewToCurl;
@property (nonatomic, readonly) BOOL pageIsCurled;
@property (nonatomic, readonly) XBPageCurlView *pageCurlView;
@property (nonatomic, readonly) XBSnappingPoint *cornerSnappingPoint;

-(void)curlPage;
- (void)uncurlPageAnimated:(BOOL)animated completion:(void (^)(void))completion;
- (void)refreshPageCurlView;

@end
