//
//  ModelController.h
//  Hopkins Dining Order System Shell
//
//  Created by Phillap on 6/28/14.
//  Copyright (c) 2014 Phillap. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
