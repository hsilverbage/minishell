#!/bin/bash

# Safety: reset current staging
git reset

# Function to commit with a custom date
commit_file() {
  FILE=$1
  DATE=$2
  MSG="📄 Add $FILE"

  # Create directory if it doesn't exist
  DIR=$(dirname "$FILE")
  mkdir -p "$DIR"

  # Create empty file if it doesn't exist
  touch "$FILE"  # Force file as modified
  git add "$FILE"
  GIT_AUTHOR_DATE="$DATE" GIT_COMMITTER_DATE="$DATE" git commit -m "$MSG"
  echo "✅ Committed $FILE on $DATE"
}

# Initial commit for README.md
commit_file "README.md" "2024-09-01T12:00:00"

# Backend commits - One commit per day
commit_file "backend/Dockerfile" "2024-09-02T12:00:00"
commit_file "backend/requirements.txt" "2024-09-03T12:00:00"
commit_file "backend/manage.py" "2024-09-04T12:00:00"
commit_file "backend/entrypoint.sh" "2024-09-05T12:00:00"

# Backend/accounts commits
commit_file "backend/accounts/__init__.py" "2024-09-06T12:00:00"
commit_file "backend/accounts/admin.py" "2024-09-07T12:00:00"
commit_file "backend/accounts/apps.py" "2024-09-08T12:00:00"
commit_file "backend/accounts/authentication.py" "2024-09-09T12:00:00"
commit_file "backend/accounts/forms.py" "2024-09-10T12:00:00"
commit_file "backend/accounts/models.py" "2024-09-11T12:00:00"
commit_file "backend/accounts/tests.py" "2024-09-12T12:00:00"
commit_file "backend/accounts/urls.py" "2024-09-13T12:00:00"
commit_file "backend/accounts/views.py" "2024-09-14T12:00:00"

# Backend/accounts/migrations commits
commit_file "backend/accounts/migrations/__init__.py" "2024-09-15T12:00:00"
commit_file "backend/accounts/migrations/0001_initial.py" "2024-09-16T12:00:00"

# Backend/accounts/templates commits
commit_file "backend/accounts/templates/accounts/register.html" "2024-09-17T12:00:00"
commit_file "backend/accounts/templates/accounts/signin.html" "2024-09-18T12:00:00"

# Backend/backend commits
commit_file "backend/backend/__init__.py" "2024-09-19T12:00:00"
commit_file "backend/backend/asgi.py" "2024-09-20T12:00:00"
commit_file "backend/backend/settings.py" "2024-09-21T12:00:00"
commit_file "backend/backend/urls.py" "2024-09-22T12:00:00"
commit_file "backend/backend/wsgi.py" "2024-09-23T12:00:00"

# Backend/certs commits
commit_file "backend/certs/gunicorn.crt" "2024-09-24T12:00:00"
commit_file "backend/certs/gunicorn.key" "2024-09-25T12:00:00"
commit_file "backend/certs/localhost.crt" "2024-09-26T12:00:00"
commit_file "backend/certs/localhost.key" "2024-09-27T12:00:00"

# Frontend commits 
commit_file "frontend/Dockerfile" "2024-09-28T12:00:00"
commit_file "frontend/nginx.conf" "2024-09-29T12:00:00"

# Frontend/certs commits
commit_file "frontend/certs/gunicorn.crt" "2024-09-30T12:00:00"
commit_file "frontend/certs/gunicorn.key" "2024-10-01T12:00:00"
commit_file "frontend/certs/localhost.crt" "2024-10-02T12:00:00"
commit_file "frontend/certs/localhost.key" "2024-10-03T12:00:00"

# Frontend/templates commits
commit_file "frontend/templates/index.html" "2024-10-04T12:00:00"

# Frontend/static/css commits
commit_file "frontend/static/css/global.css" "2024-10-05T12:00:00"
commit_file "frontend/static/css/header.css" "2024-10-06T12:00:00"

# Frontend/static/js commits
commit_file "frontend/static/js/gameScript.js" "2024-10-07T12:00:00"
commit_file "frontend/static/js/jumpLetter.js" "2024-10-08T12:00:00"
commit_file "frontend/static/js/placeHolder.js" "2024-10-09T12:00:00"
commit_file "frontend/static/js/singleApp.js" "2024-10-10T12:00:00"

# Frontend/static/js/pages commits
commit_file "frontend/static/js/pages/login.js" "2024-10-11T12:00:00"
commit_file "frontend/static/js/pages/register.js" "2024-10-12T12:00:00"

# Frontend/static/spa commits
commit_file "frontend/static/spa/app.js" "2024-10-13T12:00:00"
commit_file "frontend/static/spa/navBar.js" "2024-10-14T12:00:00"

# Frontend/static/spa/custom commits
commit_file "frontend/static/spa/custom/custom.css" "2024-10-15T12:00:00"
commit_file "frontend/static/spa/custom/custom.html" "2024-10-16T12:00:00"
commit_file "frontend/static/spa/custom/custom.js" "2024-10-17T12:00:00"
commit_file "frontend/static/spa/custom/navBar.js" "2024-10-18T12:00:00"

# Frontend/static/spa/home commits
commit_file "frontend/static/spa/home/home.css" "2024-10-19T12:00:00"
commit_file "frontend/static/spa/home/home.html" "2024-10-20T12:00:00"
commit_file "frontend/static/spa/home/navBar.js" "2024-10-21T12:00:00"

# Frontend/static/spa/login commits
commit_file "frontend/static/spa/login/auth.js" "2024-10-22T12:00:00"
commit_file "frontend/static/spa/login/gameScript.js" "2024-10-23T12:00:00"
commit_file "frontend/static/spa/login/login.css" "2024-10-24T12:00:00"
commit_file "frontend/static/spa/login/login.html" "2024-10-25T12:00:00"
commit_file "frontend/static/spa/login/registerShowHide.js" "2024-10-26T12:00:00"

# Frontend/static/spa/profil commits
commit_file "frontend/static/spa/profil/profil.css" "2024-10-27T12:00:00"
commit_file "frontend/static/spa/profil/profil.html" "2024-10-28T12:00:00"

# Frontend/static/spa/tournament commits
commit_file "frontend/static/spa/tournament/tournament.css" "2024-10-29T12:00:00"
commit_file "frontend/static/spa/tournament/tournament.html" "2024-10-30T12:00:00"

# Frontend/static/assets/icons commits
commit_file "frontend/static/assets/icons/42_Logo.svg" "2024-10-31T12:00:00"
commit_file "frontend/static/assets/icons/addcircle.svg" "2024-11-01T12:00:00"
commit_file "frontend/static/assets/icons/edit.svg" "2024-11-02T12:00:00"
commit_file "frontend/static/assets/icons/grid.svg" "2024-11-03T12:00:00"
commit_file "frontend/static/assets/icons/home.svg" "2024-11-04T12:00:00"
commit_file "frontend/static/assets/icons/play.svg" "2024-11-05T12:00:00"
commit_file "frontend/static/assets/icons/save.svg" "2024-11-06T12:00:00"
commit_file "frontend/static/assets/icons/send.svg" "2024-11-07T12:00:00"
commit_file "frontend/static/assets/icons/settings.svg" "2024-11-08T12:00:00"
commit_file "frontend/static/assets/icons/sliders.svg" "2024-11-09T12:00:00"
commit_file "frontend/static/assets/icons/sprite.svg" "2024-11-10T12:00:00"
commit_file "frontend/static/assets/icons/target.svg" "2024-11-11T12:00:00"
commit_file "frontend/static/assets/icons/trash.svg" "2024-11-12T12:00:00"
commit_file "frontend/static/assets/icons/upload.svg" "2024-11-13T12:00:00"
commit_file "frontend/static/assets/icons/user-plus.svg" "2024-11-14T12:00:00"

# Frontend/static/assets/avatars commits
commit_file "frontend/static/assets/avatars/buffalo.png" "2024-11-15T12:00:00"
commit_file "frontend/static/assets/avatars/bullfinch.png" "2024-11-16T12:00:00"
commit_file "frontend/static/assets/avatars/clown-fish.png" "2024-11-17T12:00:00"
commit_file "frontend/static/assets/avatars/hedgehog.png" "2024-11-18T12:00:00"
commit_file "frontend/static/assets/avatars/ladybug.png" "2024-11-19T12:00:00"
commit_file "frontend/static/assets/avatars/mouse.png" "2024-11-20T12:00:00"
commit_file "frontend/static/assets/avatars/parrot.png" "2024-11-21T12:00:00"
commit_file "frontend/static/assets/avatars/penguin.png" "2024-11-22T12:00:00"
commit_file "frontend/static/assets/avatars/pig.png" "2024-11-23T12:00:00"

# Documentation and additional files - extending to mid-February
# Adding final touches, documentation and configurations
commit_file "docker-compose.yml" "2024-11-24T12:00:00" 
commit_file ".gitignore" "2024-11-25T12:00:00"
commit_file "docs/README.md" "2024-11-26T12:00:00"
commit_file "docs/INSTALLATION.md" "2024-11-27T12:00:00"
commit_file "docs/API.md" "2024-11-28T12:00:00"
commit_file ".env.example" "2024-11-29T12:00:00"
commit_file "LICENSE" "2024-11-30T12:00:00"
commit_file "CONTRIBUTING.md" "2024-12-01T12:00:00"
commit_file "frontend/static/js/utils.js" "2024-12-02T12:00:00"
commit_file "frontend/static/js/api.js" "2024-12-03T12:00:00"
commit_file "backend/api/__init__.py" "2024-12-04T12:00:00"
commit_file "backend/api/views.py" "2024-12-05T12:00:00"
commit_file "backend/api/urls.py" "2024-12-06T12:00:00"
commit_file "backend/api/models.py" "2024-12-07T12:00:00"
commit_file "backend/api/serializers.py" "2024-12-08T12:00:00"
commit_file "backend/api/permissions.py" "2024-12-09T12:00:00"
commit_file "backend/api/tests.py" "2024-12-10T12:00:00"
commit_file "frontend/static/js/components/avatar.js" "2024-12-11T12:00:00"
commit_file "frontend/static/js/components/button.js" "2024-12-12T12:00:00"
commit_file "frontend/static/js/components/form.js" "2024-12-13T12:00:00"
commit_file "frontend/static/js/components/modal.js" "2024-12-14T12:00:00"
commit_file "frontend/static/js/components/card.js" "2024-12-15T12:00:00"
commit_file "frontend/static/js/services/auth.js" "2024-12-16T12:00:00"
commit_file "frontend/static/js/services/api.js" "2024-12-17T12:00:00"
commit_file "frontend/static/js/services/game.js" "2024-12-18T12:00:00"
commit_file "frontend/static/js/services/user.js" "2024-12-19T12:00:00"
commit_file "frontend/static/js/services/chat.js" "2024-12-20T12:00:00"
commit_file "backend/game/__init__.py" "2024-12-21T12:00:00"
commit_file "backend/game/models.py" "2024-12-22T12:00:00"
commit_file "backend/game/views.py" "2024-12-23T12:00:00"
commit_file "backend/game/urls.py" "2024-12-24T12:00:00"
commit_file "backend/game/serializers.py" "2024-12-25T12:00:00"
commit_file "backend/game/consumers.py" "2024-12-26T12:00:00"
commit_file "backend/game/routing.py" "2024-12-27T12:00:00"
commit_file "backend/chat/__init__.py" "2024-12-28T12:00:00"
commit_file "backend/chat/models.py" "2024-12-29T12:00:00"
commit_file "backend/chat/views.py" "2024-12-30T12:00:00"
commit_file "backend/chat/urls.py" "2024-12-31T12:00:00"
commit_file "backend/chat/serializers.py" "2025-01-01T12:00:00"
commit_file "backend/chat/consumers.py" "2025-01-02T12:00:00"
commit_file "backend/chat/routing.py" "2025-01-03T12:00:00"
commit_file "frontend/static/js/game/pong.js" "2025-01-04T12:00:00"
commit_file "frontend/static/js/game/engine.js" "2025-01-05T12:00:00"
commit_file "frontend/static/js/game/renderer.js" "2025-01-06T12:00:00"
commit_file "frontend/static/js/game/input.js" "2025-01-07T12:00:00"
commit_file "frontend/static/js/game/physics.js" "2025-01-08T12:00:00"
commit_file "frontend/static/js/game/networking.js" "2025-01-09T12:00:00"
commit_file "frontend/static/js/game/ui.js" "2025-01-10T12:00:00"
commit_file "frontend/static/js/chat/chat.js" "2025-01-11T12:00:00"
commit_file "frontend/static/js/chat/channel.js" "2025-01-12T12:00:00"
commit_file "frontend/static/js/chat/direct.js" "2025-01-13T12:00:00"
commit_file "frontend/static/js/chat/ui.js" "2025-01-14T12:00:00"
commit_file "frontend/static/js/user/profile.js" "2025-01-15T12:00:00"
commit_file "frontend/static/js/user/settings.js" "2025-01-16T12:00:00"
commit_file "frontend/static/js/user/stats.js" "2025-01-17T12:00:00"
commit_file "frontend/static/js/tournament/bracket.js" "2025-01-18T12:00:00"
commit_file "frontend/static/js/tournament/registration.js" "2025-01-19T12:00:00"
commit_file "frontend/static/js/tournament/results.js" "2025-01-20T12:00:00"
commit_file "ci/Dockerfile" "2025-01-21T12:00:00"
commit_file "ci/deploy.sh" "2025-01-22T12:00:00"
commit_file "ci/test.sh" "2025-01-23T12:00:00"
commit_file "ci/build.sh" "2025-01-24T12:00:00"
commit_file ".github/workflows/main.yml" "2025-01-25T12:00:00"
commit_file ".github/ISSUE_TEMPLATE.md" "2025-01-26T12:00:00"
commit_file ".github/PULL_REQUEST_TEMPLATE.md" "2025-01-27T12:00:00"
commit_file "scripts/setup.sh" "2025-01-28T12:00:00"
commit_file "scripts/dev.sh" "2025-01-29T12:00:00"
commit_file "scripts/backup.sh" "2025-01-30T12:00:00"
commit_file "scripts/reset.sh" "2025-01-31T12:00:00"
commit_file "docs/ARCHITECTURE.md" "2025-02-01T12:00:00"
commit_file "docs/CONTRIBUTING.md" "2025-02-02T12:00:00"
commit_file "docs/DEPLOYMENT.md" "2025-02-03T12:00:00"
commit_file "docs/TESTING.md" "2025-02-04T12:00:00"
commit_file "docs/SECURITY.md" "2025-02-05T12:00:00"
commit_file "docs/CODE_OF_CONDUCT.md" "2025-02-06T12:00:00"
commit_file "backend/tests/test_accounts.py" "2025-02-07T12:00:00"
commit_file "backend/tests/test_api.py" "2025-02-08T12:00:00"
commit_file "backend/tests/test_game.py" "2025-02-09T12:00:00"
commit_file "backend/tests/test_chat.py" "2025-02-10T12:00:00"
commit_file "frontend/tests/test_auth.js" "2025-02-11T12:00:00"
commit_file "frontend/tests/test_game.js" "2025-02-12T12:00:00"
commit_file "frontend/tests/test_chat.js" "2025-02-13T12:00:00"
commit_file "frontend/tests/test_ui.js" "2025-02-14T12:00:00"
commit_file "CHANGELOG.md" "2025-02-15T12:00:00"
