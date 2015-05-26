//
//  TSGResultsView.h
//  Spectrum
//
//  Created by Connor Neville on 5/25/15.
//  Copyright (c) 2015 connorneville. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CNLabel.h"
#import "TSGColorView.h"

@interface TSGResultsView : UIView

//Title
@property CNLabel* titleLabel;

//View for goal color
@property UIView* goalView;
//Square with goal color (subview of goalView!)
@property TSGColorView* goalColorSquare;
//Label for goal color (subview of goalView!)
@property CNLabel* goalLabel;

//View for guessed color
@property UIView* guessView;
//Square with guess color (subview of guessView!)
@property TSGColorView* guessColorSquare;
//Label for guess color (subview of guessView!)
@property CNLabel* guessLabel;

@end