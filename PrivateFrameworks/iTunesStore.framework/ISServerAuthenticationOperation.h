/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURL, NSNumber, ISDialog, ISAuthenticationContext;



@interface ISServerAuthenticationOperation : ISOperation 
{
    NSNumber *_authenticatedAccountDSID;
    ISAuthenticationContext *_authenticationContext;
    ISDialog *_dialog;
    NSURL *_redirectURL;
}

@property(retain) NSURL *redirectURL;
@property(retain) ISDialog *dialog;
@property(retain) NSNumber *authenticatedAccountDSID;
@property(retain) ISAuthenticationContext *authenticationContext;


- (void)dealloc;
- (void)run;
- (id)_authenticationContext;
- (BOOL)_copyAccountIdentifier:(id*)arg1 returningError:(id*)arg2;
- (id)_copyButtonForDialogSkip;
- (BOOL)_copySelectedButton:(id*)arg1 returningError:(id*)arg2;
- (BOOL)_handleSelectedButton:(id)arg1;
- (BOOL)_shouldAuthenticateForButton:(id)arg1;
- (id)redirectURL;
- (void)setRedirectURL:(id)arg1;
- (id)dialog;
- (void)setDialog:(id)arg1;
- (id)authenticatedAccountDSID;
- (void)setAuthenticatedAccountDSID:(id)arg1;
- (id)authenticationContext;
- (void)setAuthenticationContext:(id)arg1;

@end