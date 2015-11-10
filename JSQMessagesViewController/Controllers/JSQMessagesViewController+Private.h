//
//  JSQMessagesViewController+Private.h
//  Pods
//
//  Created by Mathias Carignani on 11/10/15.
//
//

#import "JSQMessagesViewController.h"

@interface JSQMessagesViewController ()

/**
 *
 * This private method is how the View Controller initializes most of its initial state.
 * If you override this method, you should probably call super as well.
 */
- (void)jsq_configureMessagesViewController;

/**
 *
 * This private method is how the View Controller initializes the inputToolbar.
 * If you override this method, you should probably call super as well.
 */
- (void)jsq_configureMessagesInputToolbar;

- (void)jsq_updateMessagesInputToolbar;

@end