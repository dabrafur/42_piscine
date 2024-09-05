#!/bin/bash

find . -name "*.sh" | xargs -n1 basename | sed 's/.sh$//'


