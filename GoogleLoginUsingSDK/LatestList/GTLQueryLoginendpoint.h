/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2015 Google Inc.
 */

//
//  GTLQueryLoginendpoint.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   loginendpoint/v1
// Description:
//   This is an API
// Classes:
//   GTLQueryLoginendpoint (1 custom class methods, 1 custom properties)

#import <GoogleOpenSource/GoogleOpenSource.h>

@class GTLLoginendpointLoginRequest;

@interface GTLQueryLoginendpoint : GTLQuery

//
// Parameters valid on all methods.
//

// Selector specifying which fields to include in a partial response.
@property (nonatomic, copy) NSString *fields;

#pragma mark -
#pragma mark Service level methods
// These create a GTLQueryLoginendpoint object.

// Method: loginendpoint.login
//  Authorization scope(s):
//   kGTLAuthScopeLoginendpointUserinfoEmail
//   kGTLAuthScopeLoginendpointUserinfoProfile
// Fetches a GTLLoginendpointLoginResponse.
+ (instancetype)queryForLoginWithObject:(GTLLoginendpointLoginRequest *)object;

@end
