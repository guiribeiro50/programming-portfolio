# Exercise 03

## Description

This exercise consists of creating your own SSH key and configuring it correctly to allow access to the Git repository on the server.

## Objective

Generate a pair of SSH keys (public and private) and configure the system to allow:
- Adding the public key to the repository in a specific file
- Updating the SSH key on the intranet to allow push to the Git server

## Implementation Instructions

1. **Create the SSH key**

2. **Add the public key to the repository** in a file called `id_rsa_pub`

3. **Update the SSH key on the intranet** to allow push to the Git server

## Expected Result

After completion:
- There will be a file `id_rsa_pub` in the repository containing the public key
- The SSH key will be configured on the intranet
- It will be possible to push to the Git server without authentication problems

## Delivery

The file `id_rsa_pub` must be present in the repository with the SSH public key.

## Technical Notes

- The SSH key allows secure authentication without the need for a password
- The public key can be shared, but the private key must be kept secure
- The update on the intranet is necessary to authorize access to the Git server
- The file name `id_rsa_pub` must be respected exactly
